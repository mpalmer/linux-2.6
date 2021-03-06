#ifndef ASM_X86__XEN__EVENTS_H
#define ASM_X86__XEN__EVENTS_H

enum ipi_vector {
	XEN_RESCHEDULE_VECTOR,
	XEN_CALL_FUNCTION_VECTOR,
	XEN_CALL_FUNCTION_SINGLE_VECTOR,
	XEN_SPIN_UNLOCK_VECTOR,

	XEN_NR_IPIS,
};

static inline int xen_irqs_disabled(struct pt_regs *regs)
{
	return raw_irqs_disabled_flags(regs->flags);
}

static inline void xen_do_IRQ(int irq, struct pt_regs *regs)
{
	regs->orig_ax = ~irq;
	do_IRQ(regs);
}

#endif /* ASM_X86__XEN__EVENTS_H */

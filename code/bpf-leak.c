u_int bpf_filter(pc, p, wirelen, buflen) {
  ...
  u_int32_t mem[BPF_MEMWORDS];  // scratch memory
+ bzero(mem, sizeof(mem));
  ...
  while (1) {                   // run the bytecode
  ...
}
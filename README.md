# HNDL Engine – Public Demo
Next-gen graphics engine from scratch

**Next-gen graphics engine built from scratch**  
C++23 + Rust · Vulkan 1.3 bindless · multithreaded ECS · PBR + glTF 2.0 hot-reload  
Developed daily on Arch Linux — linux-zen + Mesa RADV git

### Current status
First public demo dropping in the next 1–2 Years
Local build already running (PBR scene + IBL + clustered lighting)

### License (dual model)
- **Free forever** for individuals, students and indie teams (< 1 M€ revenue AND < 10 employees)  
- **Paid commercial license** required for companies ≥ 1 M€ revenue or ≥ 10 employees  
→ See [LICENSE](LICENSE) for full details

### Build & run (as soon as binary drops)
```bash
git clone https://github.com/handle/hndl-engine-demo.git
cd hndl-engine-demo
cmake -B build && cmake --build build --config Release
./build/hndl-demo

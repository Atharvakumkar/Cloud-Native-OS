# Cloud Native OS

A minimal custom operating system built from scratch using C, x86 Assembly, BusyBox, GRUB, Docker, GitHub Actions, and AWS EC2.
This project was built to understand how operating systems work at a low level — from bootloaders and kernels to Linux userland environments and cloud deployment.

---

# Features

* Minimal custom kernel written in C and Assembly
* Multiboot-compliant boot process
* VGA text-mode output
* Custom print and cursor handling
* BusyBox-based Linux userland
* Custom initramfs and root filesystem
* Bootable ISO generation using GRUB
* QEMU virtualization support
* Docker-based workflow
* GitHub Actions CI/CD pipeline
* AWS EC2 deployment
* CloudWatch logging integration

---

# Tech Stack

* C
* x86 Assembly
* GRUB Bootloader
* BusyBox
* Linux initramfs
* QEMU
* Docker
* GitHub Actions
* AWS EC2
* AWS CloudWatch

---

# Run Using Docker

This is the easiest way to run the operating system without manually installing dependencies.

## Pull the Docker Image

```bash
docker pull atharvakumkar08/myos
```

## Run the Container

```bash
docker run -it atharvakumkar08/myos
```

---

# Run Using GitHub Actions Artifacts

Every push automatically triggers a GitHub Actions workflow that:

* Builds the kernel
* Generates a bootable ISO
* Uploads the ISO as an artifact

## Steps

1. Open the repository Actions tab
2. Select the latest workflow run
3. Download the generated artifact
4. Extract the ZIP file
5. Run the ISO using QEMU

Example:

```bash
qemu-system-x86_64 -cdrom myos.iso
```

---

# Running Locally with QEMU

If you want to build everything manually:

## Requirements

```bash
sudo apt update

sudo apt install -y \
build-essential \
gcc \
nasm \
xorriso \
grub-pc-bin \
grub-common \
qemu-system-x86
```

## Build the OS

```bash
make
```

## Run the OS

```bash
make run
```

---

# Boot Process

The operating system boots using:

1. GRUB bootloader
2. Multiboot kernel loading
3. Kernel initialization
4. VGA text-mode setup
5. BusyBox userland startup
6. Shell launch

---

# CI/CD Pipeline

GitHub Actions automatically:

* Compiles the kernel
* Creates the bootable ISO
* Uploads downloadable artifacts
* Validates the build process

The workflow runs automatically on every push.

---

# AWS Deployment

The OS image was deployed and tested on AWS EC2.

CloudWatch logging was configured to capture:

* Boot events
* Kernel messages
* Runtime logs

---

# Screenshots

* <img width="1918" height="1078" alt="QEMU Execution" src="https://github.com/user-attachments/assets/96403a02-d065-435c-bb47-afafeab94a41" />
* <img width="622" height="418" alt="Kernel Files" src="https://github.com/user-attachments/assets/14a4fb03-e4f6-4bfd-b489-efb4f246720f" />
* <img width="1897" height="965" alt="EC2 instance" src="https://github.com/user-attachments/assets/c1839daa-1301-448a-b64e-6706466d02e8" />
* <img width="1598" height="693" alt="Cloudwatch Logs" src="https://github.com/user-attachments/assets/8a675d26-3998-4f19-b648-867a9da71caa" />


---

# Learning Outcomes

This project helped me understand:

* Operating system internals
* Memory-level programming
* Linux boot architecture
* Filesystems and init systems
* Virtualization
* CI/CD automation
* Cloud deployment workflows
  
---

# Contributing

Contributions, ideas, and suggestions are welcome.

Feel free to fork the repository and experiment with the OS!

---

# Disclaimer of Warranty and Liability

This operating system, **Cloud-Native Hybrid Operating System**, was developed with the assistance of AI tools including ChatGPT and Claude.

---

## As-Is Basis

This software is provided **"as is"**, without warranty of any kind, express or implied, including but not limited to warranties of merchantability, fitness for a particular purpose, and non-infringement.

---

## Limitation of Liability

The author shall not be held liable for any claims, damages, or other liabilities arising from the use, misuse, or inability to use this software, whether in an action of contract, tort, or otherwise.

---

## AI-Generated Components

Certain portions of the source code, scripts, configurations, and documentation were generated or assisted by AI systems.

Although efforts have been made to review, test, and validate the generated content, users are strongly advised to independently verify functionality, security, and reliability before production use.

---

## Copyright Notice

Under current legal interpretations, portions of content generated solely by AI may not qualify for copyright protection in some jurisdictions, including the United States.

---

## License

This project is licensed under the **MIT License**.

You may replace this with another license if required.

---

# Author

Atharva Kumkar

GitHub:
https://github.com/Atharvakumkar

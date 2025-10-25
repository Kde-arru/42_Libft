# 📚 Libft – 42 Porto

**Libft** is the first project at *42 Porto*, focused on building a **static C library** from scratch.  
It contains essential functions for **string manipulation**, **memory handling**, **data conversion**, and **singly linked list management** — all implemented according to the **Norminette** coding standard and 42’s conventions.

---

## 🧠 Project Overview

The goal of this project is to create a **reusable C library** that reimplements key parts of the *Standard C Library* and provides additional utility functions used in future 42 projects.

---

## ⚙️ Included Functions

### 🔤 Standard C Library Reimplementations

**Character checks**
- `ft_isalpha`  
- `ft_isdigit`  
- `ft_isalnum`  
- `ft_isascii`  
- `ft_isprint`

**Memory and string manipulation**
- `ft_strlen`  
- `ft_memset`  
- `ft_bzero`  
- `ft_memcpy`  
- `ft_memmove`  
- `ft_strlcpy`  
- `ft_strlcat`

**Character case conversion**
- `ft_toupper`  
- `ft_tolower`

**String search and comparison**
- `ft_strchr`  
- `ft_strrchr`  
- `ft_strncmp`  
- `ft_memchr`  
- `ft_memcmp`  
- `ft_strnstr`  
- `ft_strdup`

**Memory allocation and data conversion**
- `ft_atoi`  
- `ft_calloc`

---

### 🧩 Additional Utility Functions

**String handling and advanced utilities**
- `ft_substr`  
- `ft_strjoin`  
- `ft_strtrim`  
- `ft_split`  
- `ft_itoa`  
- `ft_strmapi`  
- `ft_striteri`

**File descriptor output**
- `ft_putchar_fd`  
- `ft_putstr_fd`  
- `ft_putendl_fd`  
- `ft_putnbr_fd`

---

### 💥 Bonus: Linked List Functions

**Singly linked list management**
- `ft_lstnew`  
- `ft_lstadd_front`  
- `ft_lstadd_back`  
- `ft_lstsize`  
- `ft_lstlast`  
- `ft_lstdelone`  
- `ft_lstclear`  
- `ft_lstiter`  
- `ft_lstmap`

---

## 🧾 Notes

- All functions strictly follow the **42 Norminette** style guide.  
- No forbidden library functions are used.  
- Entirely written in **pure C**.  
- This library serves as a **foundation for future 42 projects**.

---

## 🧰 Compilation

To compile the library, run:

```bash
make

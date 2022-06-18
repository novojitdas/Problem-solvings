.model small
  .stack 100h
  .data
  .code
  
  
  main proc
    
    
     mov cx,40
        
        
  l2:
  
       mov ah,2
       mov dl,'#'
       int 21h
       loop l2
       
       
       main endp
  end main





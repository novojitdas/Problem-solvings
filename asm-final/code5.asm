.model small
  .stack 100h
  .data
  .code
  
  
  main proc
    
    
     mov cx,17
    
  l1:
  
        mov ah,1
        int 21h
        
        push ax
        loop l1 
        
        
        ;this code is outside off the loop
        mov cx,6
        mov ah,2  ;display character function
        mov dl,0dh;carriage return of beginning of the line
        int 21h   
        mov dl,0ah ;line feed
        int 21h
        
        
  l2:
  
       pop dx
       int 21h
       loop l2
       
       
       main endp
  end main




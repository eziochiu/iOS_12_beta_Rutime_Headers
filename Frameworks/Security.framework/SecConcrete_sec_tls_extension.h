/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SecConcrete_sec_tls_extension : NSObject <OS_sec_tls_extension> {
    id /* block */  adder;
    id /* block */  freer;
    id /* block */  parser;
    unsigned short  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithCallbacks:(unsigned short)arg1 adder:(id /* block */)arg2 parser:(id /* block */)arg3 freer:(id /* block */)arg4;

@end

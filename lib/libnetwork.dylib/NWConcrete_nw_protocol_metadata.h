/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_protocol_metadata : NSObject <OS_nw_protocol_metadata> {
    NWConcrete_nw_protocol_definition * definition;
    void * handle;
    unsigned char  identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1 identifier:(unsigned char)arg2;

@end

/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_interface : NSObject <OS_nw_interface> {
    unsigned int  delegate_index;
    struct nw_interface_details { 
        struct nw_interface_signature { 
            unsigned char signature[20]; 
            unsigned char signature_len; 
            unsigned char __pad[3]; 
        } ipv4_signature; 
        struct nw_interface_signature { 
            unsigned char signature[20]; 
            unsigned char signature_len; 
            unsigned char __pad[3]; 
        } ipv6_signature; 
        int is_active; 
        int mtu; 
        unsigned int expensive : 1; 
        unsigned int tx_start : 1; 
        unsigned int ack_priority : 1; 
        unsigned int carrier_aggregation : 1; 
        unsigned int __pad_bits : 4; 
        unsigned char __pad[3]; 
    }  details;
    unsigned int  generation;
    unsigned int  index;
    BOOL  name;
    int  subtype;
    int  type;
    unsigned long long  update_time;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)init;

@end

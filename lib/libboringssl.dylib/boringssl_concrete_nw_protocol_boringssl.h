/* made by EzioChiu
   Image: /usr/lib/libboringssl.dylib
 */

@interface boringssl_concrete_nw_protocol_boringssl : NSObject <OS_nw_protocol_boringssl> {
    char * address_string;
    NSObject<OS_nw_association> * association;
    void * boringssl_bio;
    void * boringssl_ctx_handle;
    id /* block */  boringssl_prepare_block;
    NSObject<OS_dispatch_queue> * client_queue;
    unsigned int  did_receive_data_once;
    unsigned int  early_data_enabled;
    unsigned int  external_frames;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  finalized_output_frame_array;
    void * handshake_timer;
    unsigned int  input_available_unacknowledged;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  input_frame_array;
    unsigned int  input_frame_byte_count;
    unsigned int  input_suspended;
    unsigned int  is_dtls;
    BOOL  log_str;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  output_frame_array;
    unsigned int  output_protocol_supports_early_data;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  protocol;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  read_frame_array;
    int (* read_func;
    unsigned int  read_ready;
    unsigned int  ref_cnt;
    unsigned int  server;
    unsigned int  servicing_reads;
    int  stack_error;
    unsigned int  started_negotiation;
    unsigned int  trust_invalid_certs;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  unassigned_input_frame_array;
    unsigned int  waiting_for_writable;
    int (* write_func;
    unsigned int  write_ready;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end

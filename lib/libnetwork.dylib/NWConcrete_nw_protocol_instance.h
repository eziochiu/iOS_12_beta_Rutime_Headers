/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_protocol_instance : NSObject <OS_nw_protocol_instance> {
    unsigned int  __pad_bits;
    unsigned int  allow_buffering;
    struct nw_protocol_callbacks { 
        int (*add_input_handler)(); 
        int (*remove_input_handler)(); 
        int (*replace_input_handler)(); 
        int (*connect)(); 
        int (*disconnect)(); 
        int (*connected)(); 
        int (*disconnected)(); 
        int (*error)(); 
        int (*input_available)(); 
        int (*output_available)(); 
        int (*get_input_frames)(); 
        int (*get_output_frames)(); 
        int (*finalize_output_frames)(); 
        int (*link_state)(); 
        int (*get_parameters)(); 
        int (*get_path)(); 
        int (*get_local_endpoint)(); 
        int (*get_remote_endpoint)(); 
        int (*register_notification)(); 
        int (*unregister_notification)(); 
        int (*notify)(); 
        int (*updated_path)(); 
        int (*supports_external_data)(); 
        int (*input_finished)(); 
        int (*output_finished)(); 
        int (*get_output_local_endpoint)(); 
        int (*get_output_interface)(); 
        int (*waiting_for_output)(); 
        int (*copy_info)(); 
        int (*add_listen_handler)(); 
        int (*remove_listen_handler)(); 
        int (*get_message_properties)(); 
        int (*reset)(); 
        int (*input_flush)(); 
    }  callbacks;
    struct nw_hash_table { } * custom_flow_mapping_table;
    unsigned int  datagram;
    void * destroy_timer;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  flow_controlled;
    struct nw_hash_table { } * flows_table;
    void * handle;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  inbound_frames;
    unsigned int  initialized;
    unsigned long long  last_accepted_flow;
    struct nw_listen_protocol { struct nw_listen_protocol_callbacks {} *x1; struct nw_protocol {} *x2; void *x3; void *x4; } * listen_handler;
    BOOL  log_str;
    unsigned long long  maximum_content_size;
    NSObject<OS_nw_array> * outbound_data_requests;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  outbound_frames;
    unsigned int  output_connected;
    NSObject<OS_nw_parameters> * parameters;
    NWConcrete_nw_protocol_definition * parent_definition;
    unsigned int  pending_inbound_frame_bytes;
    unsigned int  pending_inbound_frame_count;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  pending_inbound_frames;
    struct nw_frame_array_s { 
        struct nw_frame {} *tqh_first; 
        struct nw_frame {} **tqh_last; 
    }  pending_outbound_frames;
    unsigned int  processing_input;
    unsigned int  processing_output;
    struct nw_protocol { 
        unsigned char flow_id[16]; 
        struct nw_protocol_identifier {} *identifier; 
        struct nw_protocol_callbacks {} *callbacks; 
        struct nw_protocol {} *output_handler; 
        void *handle; 
        struct nw_protocol {} *default_input_handler; 
        void *output_handler_context; 
    }  protocol;
    unsigned int  ready;
    unsigned long long  reserve_footer_size;
    unsigned long long  reserve_header_size;
    unsigned int  started;
    unsigned int  supports_external_data;
    unsigned int  waiting_for_flow_control;
    unsigned int  waiting_for_listener_accept;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)getProtocolStructure;
- (id)init;

@end

/* made by EzioChiu
   Image: /usr/lib/libboringssl.dylib
 */

@interface boringssl_concrete_boringssl_ctx : NSObject <OS_boringssl_ctx> {
    struct __CFArray { } * acceptable_domain_name_list;
    unsigned int  allow_server_identity_change;
    unsigned int  alpn_enabled;
    NSObject<OS_xpc_object> * alpn_protocols;
    NSObject<OS_nw_context> * async_context;
    boringssl_concrete_nw_protocol_boringssl * boringssl_handle;
    id /* block */  boringssl_message_block;
    int  callback_message_type;
    NSObject<OS_nw_array> * callbacks;
    unsigned int  cancelled;
    unsigned int  cert_lookup_done;
    id /* block */  challenge_block;
    NSObject<OS_dispatch_queue> * challenge_queue;
    NSObject<OS_dispatch_queue> * client_queue;
    int  config;
    int  current_handshake_state;
    unsigned int  dtls;
    unsigned int  fallback_mode;
    unsigned int  false_start_enabled;
    unsigned int  false_start_used;
    unsigned long long  handshake_timer_fires;
    id /* block */  key_update_block;
    NSObject<OS_dispatch_queue> * key_update_queue;
    struct boringssl_legacy_ctx { unsigned int x1; void *x2; } * legacy_context;
    bool  message_callback_in_progress;
    NSObject<OS_nw_protocol_metadata> * metadata;
    NSObject<OS_dispatch_queue> * metrics_queue;
    unsigned int  npn_enabled;
    unsigned int  ocsp_enable;
    struct __CFArray { } * peer_cert_chain;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * peer_public_key;
    int  peer_trust;
    struct __SecTrust { } * peer_trust_ref;
    unsigned int  peer_verified;
    NSObject<OS_nw_array> * pending_handshake_callbacks;
    unsigned int  received_certificate_request;
    unsigned int  recovered_session;
    unsigned int  resumed;
    unsigned int  sct_enable;
    unsigned int  server;
    unsigned int  session_ticket_enabled;
    struct boringssl_ctx_alert { 
        int ssl_alert_type; 
        unsigned char ssl_alert_code; 
        unsigned char ssl_warning_count; 
    }  ssl_alert;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_alpn_data_selected;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_alpn_data_supported;
    struct ssl_ctx_st { } * ssl_ctx;
    int  ssl_max_version;
    int  ssl_max_version_allowed;
    int  ssl_min_version;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_npn_data_advertised;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_ocsp_response;
    struct SSLCertificate { struct SSLCertificate {} *x1; struct { unsigned long long x_2_1_1; char *x_2_1_2; } x2; } * ssl_peer_certs;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_peer_npn_data;
    struct nw_protocol_boringssl_private_key_methods { 
        int (*type)(); 
        int (*max_signature_len)(); 
        int (*sign)(); 
        int (*decrypt)(); 
    }  ssl_private_key_methods;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * ssl_private_key_ref;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_psk_identity;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_psk_secret;
    struct tls_buffer_list_s { struct tls_buffer_list_s {} *x1; struct { unsigned long long x_2_1_1; char *x_2_1_2; } x2; } * ssl_sct_list;
    struct ssl_st { } * ssl_session;
    struct { 
        unsigned long long length; 
        char *data; 
    }  ssl_session_key;
    int  ssl_state;
    char * subject_name;
    unsigned int  tried_resumption;
    unsigned int  trust_invalid_certs;
    id /* block */  verify_block;
    NSObject<OS_dispatch_queue> * verify_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end

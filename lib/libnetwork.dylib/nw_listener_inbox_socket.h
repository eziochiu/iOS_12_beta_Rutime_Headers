/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface nw_listener_inbox_socket : nw_listener_inbox {
    unsigned char  _ipProtocol;
    int  _sockfd_for_logging_only_do_not_close_or_use;
    void * _source;
}

- (bool)cancel;
- (id)description;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)initWithSocket:(int)arg1 parameters:(id)arg2 delegate:(id)arg3;

@end

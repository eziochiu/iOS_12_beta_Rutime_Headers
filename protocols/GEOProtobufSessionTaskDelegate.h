/* made by EzioChiu.
 */

@protocol GEOProtobufSessionTaskDelegate <NSObject>

@required

- (void)protobufSession:(GEOProtobufSession *)arg1 didCompleteTask:(GEOProtobufSessionTask *)arg2;

@optional

- (NSError *)protobufSession:(GEOProtobufSession *)arg1 validateResponse:(PBCodable *)arg2;
- (void)protobufSession:(void *)arg1 willSendRequestForTask:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: GEOProtobufSession *, GEOProtobufSessionTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBRequest *, void*

@end

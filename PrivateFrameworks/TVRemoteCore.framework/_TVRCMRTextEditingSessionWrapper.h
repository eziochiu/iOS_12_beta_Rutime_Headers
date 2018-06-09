/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMRTextEditingSessionWrapper : NSObject {
    void * _session;
}

@property (nonatomic, readonly) _TVRCMRTextEditingAttributesWrapper *attributes;
@property (nonatomic, readonly, copy) NSString *text;

- (id)attributes;
- (void)dealloc;
- (id)initWithSession:(void*)arg1;
- (id)text;

@end

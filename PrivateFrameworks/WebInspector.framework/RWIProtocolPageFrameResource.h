/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (nonatomic) bool canceled;
@property (nonatomic) bool failed;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *sourceMapURL;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *url;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (bool)canceled;
- (bool)failed;
- (id)initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3;
- (id)mimeType;
- (void)setCanceled:(bool)arg1;
- (void)setFailed:(bool)arg1;
- (void)setMimeType:(id)arg1;
- (void)setSourceMapURL:(id)arg1;
- (void)setTargetId:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (id)sourceMapURL;
- (id)targetId;
- (long long)type;
- (id)url;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingRequestor : NSObject {
    AVAssetResourceLoadingRequestorInternal * _requestor;
}

@property (nonatomic, readonly) bool providesExpiredSessionReports;

- (void)dealloc;
- (id)initWithRequestInfo:(struct __CFDictionary { }*)arg1;
- (bool)providesExpiredSessionReports;

@end

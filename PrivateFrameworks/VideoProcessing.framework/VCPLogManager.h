/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPLogManager : NSObject {
    int  _logLevel;
}

@property (readonly) int logLevel;

+ (id)sharedLogManager;

- (id)init;
- (int)logLevel;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray * _archivers;
}

+ (id)sharedInstance;

- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)dealloc;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)init;

@end

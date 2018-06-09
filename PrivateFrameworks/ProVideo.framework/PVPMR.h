/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVPMR : NSObject {
    NSMutableString * _buffer;
    bool  gPVPMR_ENABLED;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (int)getLevel;
- (id)init;
- (id)reportPMR:(double)arg1 pmrKey:(id)arg2 pmrComment:(id)arg3;
- (void)setLevel:(int)arg1;
- (void)writeBufferToPermanentStorage;
- (void)writePMRInfoToBuffer:(id)arg1;
- (void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamFrameReader : NSObject {
    unsigned char  _currentframeType;
    bool  _headerInfoRead;
    NSObject<OS_dispatch_data> * _partialFrame;
    unsigned long long  _payloadLength;
    bool  _streamFailed;
}

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_readFrameHeaderIfPossible;
- (unsigned long long)bytesNeededForCurrentFrame;
- (bool)hasCompleteFrame;
- (bool)hasFailed;
- (bool)hasPartialData;
- (id)init;
- (id)popRawFrame;
- (void)pushFrameData:(id)arg1;
- (void)reset;

@end

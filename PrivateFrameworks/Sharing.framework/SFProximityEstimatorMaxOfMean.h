/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator {
    char * _channelNumberArray;
    char * _rssiArray;
    unsigned int  _rssiCount;
    unsigned int  _rssiIndex;
    unsigned int  _rssiMinCount;
}

- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (void)dealloc;
- (id)initWithProximityInfo:(id)arg1;

@end

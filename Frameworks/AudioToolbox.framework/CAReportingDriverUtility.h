/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingDriverUtility : NSObject {
    NSMutableArray * _ioChannelSubscriptions;
}

@property (retain) NSMutableArray *ioChannelSubscriptions;

- (void).cxx_destruct;
- (id)getDriverStatisticsRelativeToSnapShot:(struct NSMutableDictionary { Class x1; }*)arg1;
- (struct NSMutableDictionary { Class x1; }*)getSnapShot;
- (id)init;
- (id)ioChannelSubscriptions;
- (void)setIoChannelSubscriptions:(id)arg1;

@end

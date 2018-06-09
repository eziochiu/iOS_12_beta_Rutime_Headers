/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVDepartureAnnouncingObjectMonitor : NSObject {
    AVWeakReference * _weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg1 monitoringObject:(id)arg2;

- (void)dealloc;
- (void)finalize;
- (id)initWithMonitoringObject:(id)arg1;

@end

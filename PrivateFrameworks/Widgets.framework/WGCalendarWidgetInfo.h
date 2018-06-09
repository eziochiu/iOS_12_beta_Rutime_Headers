/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGCalendarWidgetInfo : WGWidgetInfo {
    NSDate * _date;
}

@property (setter=_setDate:, nonatomic, retain) NSDate *date;

+ (bool)isCalendarExtension:(id)arg1;

- (void).cxx_destruct;
- (void)_handleSignificantTimeChange:(id)arg1;
- (id)_queue_iconWithFormat:(int)arg1 forWidgetWithIdentifier:(id)arg2 extension:(id)arg3;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (void)_resetIconsImpl;
- (void)_setDate:(id)arg1;
- (id)date;
- (id)initWithExtension:(id)arg1;

@end

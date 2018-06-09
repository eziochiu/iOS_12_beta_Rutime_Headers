/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarOccurrencesCollection : NSObject <NSCopying> {
    NSArray * _allDayOccurrences;
    NSArray * _occurrences;
    NSArray * _timedOccurrences;
}

@property (nonatomic, readonly) NSArray *allDayOccurrences;
@property (nonatomic, readonly) NSArray *occurrences;
@property (nonatomic, readonly) NSArray *timedOccurrences;

- (void).cxx_destruct;
- (id)allDayOccurrences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3;
- (id)occurrences;
- (id)timedOccurrences;

@end

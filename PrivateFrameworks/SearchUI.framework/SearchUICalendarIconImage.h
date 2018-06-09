/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICalendarIconImage : SearchUIAppIconImage {
    NSDate * _date;
}

@property (nonatomic, retain) NSDate *date;

- (void).cxx_destruct;
- (id)date;
- (id)generateImageWithFormat:(int)arg1;
- (id)initWithDate:(id)arg1 variant:(unsigned long long)arg2;
- (void)setDate:(id)arg1;

@end

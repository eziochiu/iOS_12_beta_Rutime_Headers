/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADMRAIDAction : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _calendarEventInfo;
    double  _maximumExpandHeight;
    double  _maximumExpandWidth;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) NSDictionary *calendarEventInfo;
@property (nonatomic) double maximumExpandHeight;
@property (nonatomic) double maximumExpandWidth;
@property (nonatomic, readonly) bool opensNewsLink;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *url;

+ (id)descriptionForActionType:(long long)arg1;
+ (bool)doesURLOpenNews:(id)arg1;
+ (id)errorDescriptionForActionType:(long long)arg1 errorType:(long long)arg2;
+ (bool)supportsSecureCoding;

- (id)calendarEventInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maximumExpandHeight;
- (double)maximumExpandWidth;
- (bool)opensNewsLink;
- (void)setCalendarEventInfo:(id)arg1;
- (void)setMaximumExpandHeight:(double)arg1;
- (void)setMaximumExpandWidth:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUrl:(id)arg1;
- (long long)type;
- (id)url;

@end

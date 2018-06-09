/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTReceiptEventKit : RTReceipt <NSCopying, NSSecureCoding> {
    NSString * _calendarIdentifier;
    NSString * _location;
    NSString * _title;
}

@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3;
- (id)location;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

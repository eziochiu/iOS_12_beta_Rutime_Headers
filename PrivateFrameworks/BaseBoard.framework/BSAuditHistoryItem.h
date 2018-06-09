/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAuditHistoryItem : NSObject <BSXPCCoding, NSSecureCoding> {
    NSDate * _date;
    NSString * _description;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)itemWithString:(id)arg1;
+ (id)itemWithWithFormat:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_timeFormatter;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
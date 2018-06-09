/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPLowFuelDetails : NSObject <NSSecureCoding> {
    NSNumber * _engineType;
    NSData * _iconData;
    NSData * _iconDataCarPlay;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSNumber *engineType;
@property (nonatomic, retain) NSData *iconData;
@property (nonatomic, retain) NSData *iconDataCarPlay;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)engineType;
- (id)iconData;
- (id)iconDataCarPlay;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 engineType:(id)arg3;
- (void)setEngineType:(id)arg1;
- (void)setIconData:(id)arg1;
- (void)setIconDataCarPlay:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end

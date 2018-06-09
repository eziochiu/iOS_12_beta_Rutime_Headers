/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFormField : NSObject {
    bool  _required;
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly) bool required;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 required:(bool)arg2;
- (bool)required;
- (void)setValue:(id)arg1;
- (long long)type;
- (id)value;

@end

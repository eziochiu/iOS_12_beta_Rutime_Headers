/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKResponse : NSObject {
    NSDictionary * _attributes;
    NSString * _category;
    NSString * _string;
}

@property (retain) NSDictionary *attributes;
@property (retain) NSString *category;
@property (retain) NSString *string;

- (void).cxx_destruct;
- (id)attributes;
- (id)category;
- (id)initWithString:(id)arg1 attributes:(id)arg2 category:(id)arg3;
- (void)setAttributes:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end

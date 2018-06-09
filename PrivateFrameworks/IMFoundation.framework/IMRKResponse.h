/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMRKResponse : NSObject {
    NSDictionary * _attributes;
    NSString * _category;
    NSString * _string;
}

@property (readonly) NSDictionary *attributes;
@property (readonly) NSString *category;
@property (readonly) NSString *string;

+ (Class)__class;
+ (id)alloc;

- (id)attributes;
- (id)category;
- (id)string;

@end

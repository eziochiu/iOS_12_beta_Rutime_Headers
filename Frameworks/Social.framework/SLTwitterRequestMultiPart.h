/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLTwitterRequestMultiPart : NSObject {
    NSString * _name;
    NSData * _payload;
    NSString * _type;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, copy) NSString *type;

+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3;
+ (id)multipartBoundary;

- (void).cxx_destruct;
- (id)formPartData;
- (id)imagePartData;
- (id)name;
- (id)partData;
- (id)payload;
- (void)setName:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

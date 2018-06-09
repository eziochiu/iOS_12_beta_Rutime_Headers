/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueMethodSetter : NSKeyValueSetter {
    struct objc_method { } * _method;
}

- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 method:(struct objc_method { }*)arg3;
- (struct objc_method { }*)method;

@end

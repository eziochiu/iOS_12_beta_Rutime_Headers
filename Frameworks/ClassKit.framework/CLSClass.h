/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSClass : CLSObject {
    NSString * _className;
}

@property (nonatomic, copy) NSString *className;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)className;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClassName:(id)arg1;

@end

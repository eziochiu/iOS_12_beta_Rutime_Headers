/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSQueryResultWithPropertyList : _LSQueryResult {
    id  _propertyList;
}

@property (nonatomic, readonly, retain) id propertyList;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)propertyListWithClass:(Class)arg1;
- (id)propertyListWithClass:(Class)arg1 valuesOfClass:(Class)arg2;

@end
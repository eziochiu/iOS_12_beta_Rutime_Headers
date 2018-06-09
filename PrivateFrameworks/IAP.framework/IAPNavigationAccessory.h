/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPNavigationAccessory : NSObject {
    bool  __wasFoundInLastUpdate;
    NSSet * _components;
    unsigned long long  _identifier;
}

@property bool _wasFoundInLastUpdate;
@property (retain) NSSet *components;
@property unsigned long long identifier;

- (void).cxx_destruct;
- (bool)_wasFoundInLastUpdate;
- (id)components;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)set_wasFoundInLastUpdate:(bool)arg1;

@end

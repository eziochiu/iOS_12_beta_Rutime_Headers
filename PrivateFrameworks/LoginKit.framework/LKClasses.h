/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKClasses : NSObject <LKClassProviding> {
    NSArray * _classes;
}

@property (nonatomic, readonly, copy) NSArray *classes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)classes;
- (id)initWithClassArray:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLKClasses:(id)arg1;

@end

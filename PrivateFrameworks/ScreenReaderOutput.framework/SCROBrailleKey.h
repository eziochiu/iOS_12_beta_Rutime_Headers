/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleKey : NSObject <NSSecureCoding> {
    <NSSecureCoding> * _appToken;
    int  _displayMode;
    int  _displayToken;
    bool  _hasRouterInfo;
    NSString * _identifier;
    NSMutableArray * _maskArray;
    long long  _routerIndex;
    long long  _routerLocation;
    long long  _routerToken;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addKeyMask:(unsigned int)arg1;
- (void)addModifierMask:(unsigned int)arg1;
- (void)addSpacebarKeyMask;
- (id)description;
- (int)displayMode;
- (int)displayToken;
- (void)encodeWithCoder:(id)arg1;
- (bool)getRouterIndex:(long long*)arg1 token:(long long*)arg2 location:(long long*)arg3 appToken:(id*)arg4;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyMasks;
- (void)setDisplayMode:(int)arg1;
- (void)setDisplayToken:(int)arg1;
- (void)setRouterIndex:(long long)arg1 token:(long long)arg2 location:(long long)arg3 appToken:(id)arg4;

@end

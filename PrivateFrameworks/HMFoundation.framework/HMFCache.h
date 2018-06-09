/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFCache : HMFObject {
    NSURL * _URL;
    bool  _exists;
}

@property (readonly, copy) NSURL *URL;
@property (getter=isExists, readonly) bool exists;

+ (id)defaultCache;

- (void).cxx_destruct;
- (id)URL;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isExists;

@end

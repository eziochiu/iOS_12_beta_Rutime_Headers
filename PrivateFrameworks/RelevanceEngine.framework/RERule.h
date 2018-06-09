/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERule : NSObject <NSCopying> {
    float  _priority;
}

@property (nonatomic) float priority;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (float)priority;
- (void)setPriority:(float)arg1;

@end

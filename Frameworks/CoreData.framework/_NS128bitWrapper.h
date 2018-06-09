/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NS128bitWrapper : NSObject <NSCopying> {
    struct _double_quad_uint { 
        unsigned long long high64; 
        unsigned long long low64; 
    }  bits;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBytes:(char *)arg1;
- (bool)isEqual:(id)arg1;

@end
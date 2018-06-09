/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTrip : NSObject {
    NSArray * _items;
    unsigned long long  _type;
}

@property (readonly) NSArray *items;
@property (readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithItems:(id)arg1 type:(unsigned long long)arg2;
- (id)items;
- (unsigned long long)type;
- (id)typeDescription;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableItemCodedArray : NSArray {
    NSString * _bundleID;
    CSDecoder * _items;
    CSDecoder * _itemsContent;
    struct { 
        char *containerBytes; 
        struct { 
            unsigned int embeddedReference; 
            unsigned char type; 
        } reference; 
    }  _obj;
    NSString * _protectionClass;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) CSDecoder *items;
@property (nonatomic, readonly) CSDecoder *itemsContent;
@property (nonatomic, readonly) struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; } obj;
@property (nonatomic, retain) NSString *protectionClass;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned long long)count;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 itemsContent:(id)arg2;
- (id)items;
- (id)itemsContent;
- (struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })obj;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)protectionClass;
- (void)setBundleID:(id)arg1;
- (void)setProtectionClass:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectCollection : TSPObject {
    NSArray * _objects;
}

@property (nonatomic, readonly) NSArray *objects;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 objects:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objects;
- (void)saveToArchiver:(id)arg1;

@end

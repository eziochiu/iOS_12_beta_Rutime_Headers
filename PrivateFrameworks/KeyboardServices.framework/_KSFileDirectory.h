/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSFileDirectory : _KSFileEntry <NSFastEnumeration, NSSecureCoding> {
    NSMutableDictionary * _contents;
}

@property (nonatomic, readonly, retain) NSArray *contents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (void)consistencyCheck;
- (id)contents;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entryForName:(id)arg1;
- (id)findEntryWithComparison:(id /* block */)arg1 recursively:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirectory:(id)arg1 captureContents:(bool)arg2 storeRoot:(bool)arg3;
- (id)initWithName:(id)arg1;
- (void)performOnEverything:(id /* block */)arg1;
- (void)removeEntryWithName:(id)arg1;
- (void)restoreToPath:(id)arg1;

@end

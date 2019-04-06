#import <Foundation/Foundation.h>

@class CDSymbolsGeneratorVisitor;


@interface CDSymbolMapper : NSObject

@property (nonatomic, assign) BOOL invertOutput;

- (void)writeSymbolsFromSymbolsVisitor:(CDSymbolsGeneratorVisitor *)visitor toFile:(NSString *)file;

- (NSString *)processCrashDump:(NSString *)crashDump withSymbols:(NSDictionary *)symbols;

@end

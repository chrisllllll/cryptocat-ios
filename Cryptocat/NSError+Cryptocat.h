//
//  NSError+Cryptocat.h
//  Cryptocat
//
//  Created by Thomas Balthazar on 21/10/13.
//  Copyright (c) 2013 Thomas Balthazar. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
@interface NSError (Cryptocat)

+ (NSError *)tb_errorWithMessage:(NSString *)message;
+ (NSError *)tb_errorWithCode:(NSInteger)code message:(NSString *)message;
- (NSString *)tb_message;

@end
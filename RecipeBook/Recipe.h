//
//  Recipe.h
//  RecipeBook
//
//  Created by Shrinivas Deshpande on 7/23/14.
//  Copyright (c) 2014 GS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name; // name of recipe
@property (nonatomic, strong) NSString *prepTime; // preparation time
@property (nonatomic, strong) NSString *imageFile; // image filename of recipe
@property (nonatomic, strong) NSArray *ingredients; // ingredients

@end

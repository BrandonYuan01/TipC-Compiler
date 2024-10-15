#pragma once

#include "ASTExpr.h"

/*! \brief Class for a true Expression.
 */
class ASTTrueExpr : public ASTExpr {
public:
  ASTTrueExpr() {}
  void accept(ASTVisitor *visitor) override;
  llvm::Value *codegen() override;

protected:
  std::ostream &print(std::ostream &out) const override;
};

